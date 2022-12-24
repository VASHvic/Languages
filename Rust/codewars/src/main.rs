#[path = "8/wolf.rs"]
mod wolf;

fn main() {
    let sheeps:Vec<&str> = vec!["sheep", "sheep", "sheep", "wolf", "sheep"];

    wolf::wolf(sheeps);
}
