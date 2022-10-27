
import java.sql.*;
import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class  DisplayExample 
{
	public static void main(String[] args) 
	{
		Demo d;
		d=new Demo();
	}
}	
	 
class Demo extends JFrame implements ActionListener
{
	Container con;
	JLabel j1,j2,j3,j4;
	JTextField text1;
	JButton b1;
		
	Demo()
	{
		setVisible(true);
		setSize(350,150);
		con = getContentPane();
		//con=getContentPane();
		con.setLayout(new GridLayout(5,2,5,5));
		
			
		j1=new JLabel("Enter Employee ID");
		text1 = new JTextField(03);
		b1=new JButton("Display Data");
		j2 = new JLabel("");
		j3=new JLabel("");
		j4=new JLabel("");


		con.add(j1);
		con.add(text1);
		con.add(b1);
		con.add(j2);
		con.add(j3);
		con.add(j4);
			
		b1.addActionListener(this);
		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent we)
			{
				System.exit(0);
			}
		});
	}
		
	public void actionPerformed(ActionEvent e)
	{
		try{
				
			Class.forName("com.mysql.jdbc.Driver");
				
			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/sonoo","root1","Root@123"); 
				
				int id = Integer.parseInt(text1.getText());
				String str ="Select * from emp where id=?";
				PreparedStatement sql = con.prepareStatement(str);
				sql.setInt(1,id);	
				ResultSet rs=sql.executeQuery();
				
				rs.first();
				System.out.println(rs.getInt(1)+"  "+rs.getString(2)+"  "+rs.getInt(3));  
				System.out.println("Data Fatched");

				j2.setText("Employee Id : " + String.valueOf(rs.getInt(1)));
				j3.setText("Employee Name : " + rs.getString(2));
				j4.setText("Employee Age : " +String.valueOf(rs.getInt(3))); 
			
				con.close();  
		}
		catch(Exception p)
		{
			System.out.println(p);
		}
	}
}


