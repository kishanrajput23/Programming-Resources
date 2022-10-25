import java.sql.*;
import java.sql.DriverManager;
import java.sql.Connection;

class dbcon 
{
	public static void main(String args[])
	{
		try
		{
			String username= "phpmyadmin";
			String password = "Root@123";
				
			Class.forName("com.mysql.jdbc.Driver");
			
			String url = "jdbc:mysql://localhost:3306/tyim?verifyServerCertificate=false&useSSL=true";
			
			//String url = "jdbc:mysql://localhost:3306/tyim";
			Connection con = DriverManager.getConnection(url, username , password);   
			System.out.println("Database is connected !");
					
			con.close();

		}
		catch(Exception e)
		{
			System.out.print("Do not connect to DB - Error:"+e);	
		}
	}
}
