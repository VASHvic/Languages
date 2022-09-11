pub fn run(){
  print!("\n----------VARS FILE----------------\n");
  let name = "Brad";
  let mut age = 37;
  println!("My name is {} and I am {}", name, age);
  age = 39;
  println!("My name is {} and I am {}", name, age);
  
  const ID:i32=001;
  println!("ID: {}",ID);
  let (my_name,my_age) = ("Victor",32);

  println!("{} is {}", my_name,my_age);
}