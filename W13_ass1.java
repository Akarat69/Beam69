import javax.swing.JOptionPane;
class W13_ass1
{ static Book B1 = new Book();
	public static void main(String[] args)
	{ B1.setId("1234");
	  B1.setTitle("Computer");
	  B1.setPrice(200.0);

	  JOptionPane.showMessageDialog(null,"Book ID : " + B1.getId() +
		                                 "\nBook Title : " + B1.getTitle() +
		                                 "\nBook Price : " + B1.getPrice());
	
	}
}
