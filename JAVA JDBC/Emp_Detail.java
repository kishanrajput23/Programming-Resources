/*Write a Java program that will ask the follwing deatil for the Employee detail and display on label:
1. Employee First Name (Text Field)
2. Employee Last Name (Text Field)
3. Employee Address (Text Area)
4. Employee Gender (Radio Button)
5. Designation (Combo Box)
When employee Click on Submit Button All the Detail need to display on Differnt labels.*/


import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

class Emp_Detail extends JFrame implements ActionListener
{  

	JLabel sl1,sl2,sl3,sl4,sl5;	
	TextField tf1,tf2;  
	JTextArea t1;
	JRadioButton rb1,rb2;
	ButtonGroup bg;
	JComboBox des;
	Button b1;  
	JLabel l1,l2,l3,l4;
	
	Emp_Detail()
	{  
		setLayout(new FlowLayout(FlowLayout.LEFT));  
		setVisible(true);  
		setSize(400,400);
	
		tf1=new TextField(30);  
		tf2=new TextField(30);  
		 
		t1=new JTextArea(5,30);
		
		bg=new ButtonGroup();
		rb1=new JRadioButton("Male");
		rb2=new JRadioButton("Female");
		bg.add(rb1);
		bg.add(rb2);

		String ds_name [] = {"Manager","Clerk","IT Head"};
		des = new JComboBox(ds_name);
	
		b1=new Button("Submit");  
		b1.addActionListener(this);  
	
		l1 = new JLabel();
		l2 = new JLabel();
		l3= new JLabel();
		l4= new JLabel();
		sl1 = new JLabel("Enter your First Name :");
		sl2 = new JLabel("Enter your Last Name :");
		sl3= new JLabel("Enter your Address :");
		sl4= new JLabel("Select Gender :");	
		sl5= new JLabel("Select Designation :");	  

		add(sl1);
		add(tf1);
		add(sl2);
		add(tf2);
		add(sl3);
		add(t1);
		add(sl4);
		add(rb1);	
		add(rb2);
		add(sl5);
		add(des);	
		add(b1);
		add(l1);
		add(l2);
		add(l3);
		add(l4);

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
          	l1.setText("Emp Name : " + tf1.getText() + " " + tf2.getText());
		l2.setText("Address : "+t1.getText());
		
		if(rb1.isSelected())
		{
			l3.setText("Gender : Male ");
		}
		else if(rb2.isSelected())
		{
			l3.setText("Gender : FeMale ");
		}
		l4.setText("Your Designation : " +(String)des.getSelectedItem());
		
        }  
	public static void main(String[] args)
	{  
        	new Emp_Detail();  
    	}  
}  

	

