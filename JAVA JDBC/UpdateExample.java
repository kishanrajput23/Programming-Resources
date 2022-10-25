
import java.sql.*;
import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class  UpdateExample 
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
	JLabel j1,j2,j3;
	JTextField text1,text2;
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
		j2 = new JLabel("Enter Employee Age");	
		text2 = new JTextField(03);	
		b1=new JButton("Updatex Data");
		
		j3=new JLabel("");
		


		con.add(j1);
		con.add(text1);
		con.add(j2);		
		con.add(text2);
		con.add(b1);
		con.add(j3);
		
			
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
				
			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/sonoo","root","Admin@123"); 
				
				int id = Integer.parseInt(text1.getText());
				int age = Integer.parseInt(text2.getText());
				String str ="update emp set age = ? where id = ?";
				PreparedStatement sql = con.prepareStatement(str);
				sql.setInt(2,id);
				sql.setInt(1,age);	
				sql.executeUpdate();
				
				j3.setText("Data Updated");
				text1.setText("");
				text2.setText("");
				System.out.println("Data updated");
				con.close();  
		}
		catch(Exception p)
		{
			System.out.println(p);
		}
	}
}


