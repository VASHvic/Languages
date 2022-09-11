pub fn run() {
  print!("\n----------PRINT FILE----------------\n");
  println!("hello from the print file");
  // postional arguments
  println!("{0} is from {1} and {0} likes to {2}", "Brad","Mass", "code");
  // named arguments
  println!("{name} is likes to {activity}", name="Brad",activity="Mass");
  //plceholder tratis
  println!("binary: {:b} Hex: {:x} Octal: {:o}",10,10,10);
  //plcehodler for debug trait
  println!("{1:?} {0:?} is the {actor:?} name.",
           "Slater",
           "Christian",
           actor="actor's");
  //Basic math
  println!("10+10={}",10+10);
  // ?
  let name = "Peter";
  let age = 27;
  println!("{:#?}", (name, age));
}