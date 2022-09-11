pub fn run() {
  print!("\n----------TYPES FILE----------------\n");
  println!("Max i32 {}", std::i32::MAX);
  println!("Max i64 {}", std::i64::MAX);

  // Get boolean from expression
  let is_greater = 10 > 5;
  
  let a1 = 'a';
  let face = '\u{1F600}';

  println!("{:?}", (is_greater,a1,face));

}