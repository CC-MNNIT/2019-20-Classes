
class Clothes {
    String color;
    int size;
    public void wash() {
        System.out.println("Washing the cloth");
    }
}

class Shirt extends Clothes{
    String type;
    public void display() {
        System.out.println("Shirt");
    }
}

class Jeans extends Clothes{
    String material;
    public void display() {
        System.out.println("Jeans");
    }
}

public class Inherit {
    public static void main(String args[]) {
        Shirt tshirt = new Shirt();
        Jeans denim = new Jeans();

        tshirt.wash();
        denim.wash();

        tshirt.display();
        denim.display();
    }
}
