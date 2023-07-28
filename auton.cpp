void shoot(){
//roller add 6 more inches
    flywheel.move_velocity(6000);
    pros::delay(200);
    indexer_pneum.set_value(true);
    pros::delay(200);
    indexer_pneum.set_value(false);
    pros::delay(200);
    indexer_pneum.set_value(true);
    pros::delay(200);
    indexer_pneum.set_value(false);
    pros::delay(200);
    indexer_pneum.set_value(true);
    pros::delay(200);
    indexer_pneum.set_value(false);
    pros::delay(200);
    flywheel.move_velocity(6000);
   
}
void skills_auton(){ 
  roller.move_velocity(-800);
  pros::delay(250);
  roller.move_velocity(0);
 	
  chassis.set_drive_pid(-24, DRIVE_SPEED, true);
  chassis.wait_drive();


  chassis.set_turn_pid(270, TURN_SPEED);
  chassis.wait_drive();
 
  chassis.set_drive_pid(18, DRIVE_SPEED, true);
  chassis.wait_drive();
 
  roller.move_velocity(-800);
  pros::delay(250);
  roller.move_velocity(0);
 
  chassis.set_drive_pid(-18, DRIVE_SPEED, true);
  chassis.wait_drive();
 
  chassis.set_turn_pid(180, TURN_SPEED);
  chassis.wait_drive();
 
  chassis.set_drive_pid(24, DRIVE_SPEED, true);
  chassis.wait_drive();
 
  chassis.set_turn_pid(135, TURN_SPEED);
  chassis.wait_drive();
 
  //intake.move_velocity(120);
  chassis.set_drive_pid(28 , DRIVE_SPEED, true);
  chassis.wait_drive();
 
  //intake.move_velocity(0);
  chassis.set_turn_pid(225, TURN_SPEED);
  chassis.wait_drive();
 
  shoot();
 
  chassis.set_turn_pid(135, TURN_SPEED);
  chassis.wait_drive();
 
  chassis.set_drive_pid(28, DRIVE_SPEED, true);
  chassis.wait_drive();
 
  chassis.set_turn_pid(180, TURN_SPEED);
  chassis.wait_drive();


  chassis.set_drive_pid(38, DRIVE_SPEED, true);
  chassis.wait_drive();
 
  chassis.set_turn_pid(270, TURN_SPEED);
  chassis.wait_drive();
 
  shoot();
 
//might have screwed this up
  chassis.set_drive_pid(-42, DRIVE_SPEED, true);
  chassis.wait_drive();
 
  chassis.set_turn_pid(180, TURN_SPEED);
  chassis.wait_drive();
 
  chassis.set_drive_pid(6, DRIVE_SPEED, true);
  chassis.wait_drive();
 //till here everything else should be good hopefully 
  roller.move_velocity(-800);
  pros::delay(250);
  roller.move_velocity(0);
 
  chassis.set_drive_pid(24, DRIVE_SPEED, true);
  chassis.wait_drive();
 
  chassis.set_turn_pid(90, TURN_SPEED);
  chassis.wait_drive();
 
  chassis.set_drive_pid(18, DRIVE_SPEED, true);
  chassis.wait_drive();


  roller.move_velocity(-800);
  pros::delay(250);
  roller.move_velocity(0);
 
  chassis.set_drive_pid(-18, DRIVE_SPEED, true);
  chassis.wait_drive();
 
  chassis.set_turn_pid(0, TURN_SPEED);
  chassis.wait_drive();
 
  chassis.set_drive_pid(18, DRIVE_SPEED, true);
  chassis.wait_drive();
 
  chassis.set_turn_pid(315, TURN_SPEED);
  chassis.wait_drive();
 
  //intake.move_velocity(120);
  chassis.set_drive_pid(28, DRIVE_SPEED, true);
  chassis.wait_drive();
 
  //intake.move_velocity(0);
  chassis.set_turn_pid(45, TURN_SPEED);
  chassis.wait_drive();


  shoot();
 
  
  chassis.set_drive_pid(-18, DRIVE_SPEED, true);
  chassis.wait_drive();
 
  chassis.set_turn_pid(0, TURN_SPEED);
  chassis.wait_drive();
 
  
  chassis.set_drive_pid(42, DRIVE_SPEED, true);
  chassis.wait_drive();
 
  chassis.set_turn_pid(135, TURN_SPEED);
  chassis.wait_drive();
 
	//this value can be changed cus i based it entirely off the extensions
  chassis.set_drive_pid(20, DRIVE_SPEED, true);
  chassis.wait_drive();
 
  //expansions();
}
