import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Jbtn_Shape1 extends JFrame implements ActionListener
{
	JButton b1,b2;
	Container con;
	Jbtn_Shape1(String s)
	{
		super(s);
		setSize(500,500);
		con = getContentPane();
		con.setLayout(new FlowLayout(FlowLayout.LEFT));

		b1 = new JButton("Circle");
		b1.addActionListener(this);
		con.add(b1);

		b2= new JButton("Rectangle");
		b2.addActionListener(this);
		con.add(b2);

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
		Graphics g = getGraphics();

		if(e.getActionCommand()=="Circle")
		{
			b1.setText("This is Circle");
			g.drawOval(50,50,100,100);
		}
		else if(e.getActionCommand()=="Rectangle")
		{
			b2.setText("This is Rect");
			g.drawRect(50,260,150,100);
		}
	}

}

class Jbtn_Shape
{
	public static void main(String[] args) 
	{
		Jbtn_Shape1 fb = new Jbtn_Shape1("Button Click");
		fb.setVisible(true);
	}

}