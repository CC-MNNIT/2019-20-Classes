class InfinityStones{

	private int stones;
	private int snapCount = 0;
	//snapCount only used in snap function
	public void snap(){
		snapCount++;
	}
	public void setStones(int stones){
		if(stones<0 || stones>6)
			System.out.println("Wrong input!!");
		else
		this.stones = stones;
	}
	public int getStones(){
		return this.stones;
	}
	public int getSnaps(){
		return this.snapCount;
	}
}
class Simulate2{
	public static void main(String args[]){

		InfinityStones obj = new InfinityStones();
		obj.setStones(-10);
		obj.setStones(6);
		System.out.println("I am Thanos, i have " + obj.getStones() + " stones");
	}
}
