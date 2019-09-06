
class Clothes {
    private String color;
    protected int size;
    public static void staticMethod() {
        System.out.println("I am static");
    }
    public void nonStaticMethod() {
        System.out.println("I am non-static");
    }
    public void setColor(String col) {
        color = col;
    }
    public String getColor() {
        return color;
    }
    public void setSize(int num) {
        size = num;
    }
    public int getSize() {
        return size;
    }
    public void wash() {
        System.out.println("Washing the cloth");
    }
}

class Shirt extends Clothes{
    String type;
    public void setType(String typ) {
        type = typ;
    }
    public String getType() {
        return type;
    }
    public void display() {
        System.out.println(getColor() + " " + type + " of size " + size);
    }
}

class Jeans extends Clothes{
    String material;
    public void setMaterial(String mat) {
        material = mat;
    }
    public String getMaterial() {
        return material;
    }
    public void display() {
        System.out.println(getColor() + " " + material + " of size " + size);
    }
}

public class Inherit3 {
    public static void main(String args[]) {
        Shirt tshirt = new Shirt();
        Jeans denim = new Jeans();

        tshirt.setType("T-shirt");
        tshirt.setColor("Blue");
        tshirt.setSize(32);

        denim.setMaterial("Denim");
        denim.setColor("Blue");
        denim.setSize(40);

        tshirt.wash();
        denim.wash();

        tshirt.display();
        denim.display();

        // Non static method cannot be referenced from a static member

        Clothes obj = new Clothes();
        obj.staticMethod();
        obj.nonStaticMethod();

        Clothes.staticMethod();
        //Clothes.nonStaticMethod();
    }
}
