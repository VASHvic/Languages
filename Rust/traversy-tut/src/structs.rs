  struct Color {
    red: u8,
    green: u8,
    blue: u8,
  }

  // Tuple Struct

  struct Color2(u8,u8,u8);
  
  struct Person {
    first_name:String,
    last_name:String
  }
  impl Person {
    fn new(first: &str, last: &str) -> Person {
      Person {
        first_name : first.to_string(),
        last_name : last.to_string(),
    }
  }
    fn full_name(&self) -> String {
      format!("{} {}",  self.first_name.to_string(),  self.last_name.to_string())
    }
    fn set_last_name(&mut self, last:&str){
      self.last_name = last.to_string();
    }
    fn to_tuple(self) -> (String,String) {
      (self.first_name,self.last_name)
    }

}

pub fn run(){
  print!("\n----------STRUCTS FILE----------------\n");

  let mut c = Color {
    red:255,
    green:0,
    blue:0,
  };
  c.red = 200;

  println!("Color: {} {} {}", c.red,c.green,c.blue);

  let c2 = Color2(255,0,0);

  println!("Color: {} {} {}", c2.0,c2.1,c2.2);

  let mut p = Person::new("Jhon", "Doe");
  println!("Person {} {}", p.first_name, p.last_name);
  p.set_last_name("Williams");
  println!("Geting name with method: {}", p.full_name());
  println!("Person tuple: {:?}", p.to_tuple());


}