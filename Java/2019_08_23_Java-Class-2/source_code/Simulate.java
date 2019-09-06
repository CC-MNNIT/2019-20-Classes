class InfinityStones{

	int stones;
	int snapCount;
	
	public void snap(){
		snapCount++;
	}
}
class Simulate{
	public static void main(String args[]){

		InfinityStones obj = new InfinityStones();
		obj.stones = -50;
		System.out.println("I am Thanos, i have " + obj.stones + " stones");
	}
}