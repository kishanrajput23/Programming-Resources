
import java.sql.*;
import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class  DeleteExample 
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
	JLabel j1,j2;
	JTextField text1;
	JButton b1;
		
	Demo()
	{
		setVisible(true);
		setSize(500,100);
		con = getContentPane();
		//con=getContentPane();
		con.setLayout(new GridLayout(2,2,5,5));
					
		j1=new JLabel("Enter Employee ID");
		text1 = new JTextField(03);
		b1=new JButton("Delete Data");
		j2 = new JLabel("");
		
		con.add(j1);
		con.add(text1);
		con.add(b1);
		con.add(j2);
					
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
				String str ="DELETE FROM emp WHERE id = ?";
				PreparedStatement sql = con.prepareStatement(str);
				sql.setInt(1,id);	
				sql.executeUpdate();
				
				
				System.out.println("Data Deleted");

				j2.setText("Employee data deleted with empid :" + id);
				
				con.close();  
		}
		catch(Exception p)
		{
			System.out.println(p);
		}
	}
}


