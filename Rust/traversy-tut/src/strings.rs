pub fn run(){
  print!("\n----------STRINGS FILE----------------\n");
  let mut hello = String::from("Hello");
  println!("Length: {}",hello.len());
  println!("Capacity: {}",hello.capacity());
  hello.push_str(" World!");
  println!("{}",hello);
  println!("Is Emprty: {}",hello.is_empty());
  println!("Replaced : {}",hello.replace("World","There"));
  // Loop string by Whitespace
  for word in hello.split(' ') {
    println!("{}", word);
  }

  //create string with capacity
  let mut s = String::with_capacity(10);
  s.push('a');
  s.push('b');
  
  //assertion testing
  assert_eq!(2,s.len());
  println!("{}",s);
  println!("Hello: {}",hello);


}