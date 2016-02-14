fn main() {
    let mut i = 0;
    let mut j;
    let mut counter:u64 = 0;
    while i < 100000 {
        j = i;
        while j < 100000 {
            j += 1;
            counter += 1;
        }
        i += 1;
    }
    println!("{} iterations", counter);
}
