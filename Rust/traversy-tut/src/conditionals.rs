pub fn run() {
  print!("\n----------CONDITIONALS FILE----------------\n");
  let age=18;
  let can_drink = if age >= 21 {true} else {false};
  if can_drink {
    println!("You cant hace a drink at {}", age);
  }
}