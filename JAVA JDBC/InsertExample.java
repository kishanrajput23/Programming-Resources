import java.sql.*;
import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

public class  InsertExample 
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
	JTextField text1,text2,text3;
	JButton b1;
		
	Demo()
	{
		setVisible(true);
		setSize(350,150);
		con = getContentPane();
		//con=getContentPane();
		con.setLayout(new GridLayout(4,2,5,5));
		
			
		j1=new JLabel("Enter Employee ID");
		text1 = new JTextField(03);
		j2 = new JLabel("Enter Employee Name ");
		text2 = new JTextField(10);
		j3=new JLabel("Enter Employee Age ");
		text3 = new JTextField(03);
		
		b1=new JButton("ADD DATA");
		j4=new JLabel("");


		con.add(j1);
		con.add(text1);
		con.add(j2);
		con.add(text2);	
		con.add(j3);
		con.add(text3);
		con.add(b1);
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
				String name = text2.getText();
				int age = Integer.parseInt(text3.getText());
				
				
				String str ="INSERT INTO emp(id,name,age) VALUES(?,?,?)";
				
				PreparedStatement sql = con.prepareStatement(str);
				sql.setInt(1,id);
				sql.setString(2,name);
				sql.setInt(3,age);
							
				sql.executeUpdate();
				System.out.println("inserted");
				j4.setText("Data Inserted");
				text1.setText("");
				text2.setText("");
				text3.setText("");
				con.close();  
		}
		catch(Exception P)
		{
			System.out.println("catch");
		}
	}
}


