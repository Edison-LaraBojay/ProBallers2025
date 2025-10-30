#include <main.h>

void scoreHigh(int ms = -1){

    Outtake.move(-120);

    if (ms > 0){
        pros::delay(ms);
        Outtake.move(0);
    }


}

void scoreMedium(int ms = -1){ // go below outtake rollers
    // scoreMedium() -> score until returned back to intake state
    // scoreMedium(int) -> score for int ms then return back to intake

    Outtake.move(120);

    if (ms > 0){
        pros::delay(ms);
        Outtake.move(0);
    }


}

void scoreLow(int ms = -1){ // (reverse intake)
    intake(-1);
    Outtake.move(120);

    if (ms > 0){
        pros::delay(ms);
        intake();
    }
}

void stopOuttaking(){ // stops high, medium, low
    intake(); // just returns back to intaking as normal
}

void intake(int direction = 1){
    // -1 direction -> reverse intake (score low)
    InitialIntake.move(direction * -120);
    ContinuedIntake.move(direction * -120);
    Outtake.move(0);
}

void stopIntaking(){
    InitialIntake.move(0);
    ContinuedIntake.move(0);
}




