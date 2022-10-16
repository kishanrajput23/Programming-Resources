import java.io.*;
class 	Biodata implements Serializable
{
	String name;
	int age;
	String adr1;
	String adr2;

	Biodata(String nm,int ag,String ad1,String ad2)
	{
		name=nm;
		age=ag;
		adr1=ad1;
		adr2=ad2;
	}
	void printbio()
	{
		System.out.println("Name "+name);
		System.out.println("Age "+age);
		System.out.println("Address 1 "+adr1);
		System.out.println("Address 2 "+adr2);
	}
}

public class ObjectInput1
{
	public static void main(String[] args) throws EOFException
	{
		try
		{

			FileInputStream fis = new FileInputStream("1.tmp");
			FileOutputStream fos = new FileOutputStream("1.tmp");
			ObjectInputStream ois = new ObjectInputStream(fis);
			ObjectOutputStream oos = new ObjectOutputStream (fos);

			Biodata b1 = new Biodata("aayush", 35, "Satellite", "india");
			Biodata b2 = new Biodata("riddhi", 30, "new jursy", "USA");
			Biodata b3 = new Biodata("riya", 40, "moneko", "UK");

			oos.writeObject(b1);
			oos.writeObject(b2);
			oos.writeObject(b3);

			System.out.println("--------------------------------");
			for (int i=0;i<3;i++) 
			{
				Biodata b;
				b = (Biodata) ois.readObject();
				b.printbio();	
				System.out.println("--------------------------------");
			}
			ois.close();

		}
		catch (Exception e) 
		{
			System.out.println(e);	
		}
	}
}