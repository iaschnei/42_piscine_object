# include "includes/Car.hpp"

int main(void) {

    Car car;

    car.start();

    car.motor->accelerate(10);
    car.steering_wheel->turn_wheel(50);
    car.gear_stick->shift_gears_up();
    car.motor->accelerate(50);
    car.steering_wheel->straihgten_wheels();
    car.brakes->apply_force_on_brakes(10);
    car.gear_stick->shift_gears_down();
    car.brakes->apply_emergency_brakes();

    car.stop();
}