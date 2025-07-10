interface Device {
    void turn_on();
    void turn_off();
}
class Fan implements Device {
    public void turn_on() {
        System.out.println("Fan is turned ON!");
    }
    public void turn_off() {
        System.out.println("Fan is turned OFF!");
    }
}
class Main {
    public static void main(String[] args) {
        Fan fan = new Fan();
        fan.turn_on();
        fan.turn_off();
    }
}