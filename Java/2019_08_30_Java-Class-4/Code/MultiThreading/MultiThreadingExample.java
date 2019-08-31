


public class MultiThreadingExample{

    public static void main(String[] args){

        ThreadWorker1 thread1 = new ThreadWorker1(); 
        Thread thread2 = new Thread(new ThreadWorker2());

        thread1.start();
        thread2.start();

        for(int i=0;i<10;i++){
            System.out.println("Main-Thread " +i);
        }

    }

}


class ThreadWorker1 extends Thread{

    public void run(){
        for(int i=0;i<10;i++){
            System.out.println("Thread-1 "+ i);
        }
    }

}

class ThreadWorker2 implements Runnable {
    public void run(){
        for(int i=0;i<10;i++){
            System.out.println("Thread-2 "+ i);
        }
    }
}