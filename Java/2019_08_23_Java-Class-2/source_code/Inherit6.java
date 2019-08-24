// Simple Inheritance
class Clothes {
    private String color;
    protected int size;
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
    // made the function static
    public static void wash() {
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
    public static void wash() {
        System.out.println("Washing the shirt");
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
    public static void wash() {
        System.out.println("Washing the jeans");
    }
}

public class Inherit6 {
    public static void main(String args[]) {
        Clothes tshirt = new Shirt();
        Clothes denim = new Jeans();

        tshirt.setColor("Blue");
        tshirt.setSize(32);

        denim.setColor("Blue");
        denim.setSize(40);

        // wash() of base class is called (function shadowing)
        tshirt.wash();
        denim.wash();
    }
}
