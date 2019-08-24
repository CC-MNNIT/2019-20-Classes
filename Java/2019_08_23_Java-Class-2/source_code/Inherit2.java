
class Clothes {
    // Private data members need getters and setters
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

public class Inherit2 {
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
    }
}
