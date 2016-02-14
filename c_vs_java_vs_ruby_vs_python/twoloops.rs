fn main() {
    let mut i = 0;
    let mut j;
    while i < 100000 {
        j = i;
        while j < 100000 {
            j += 1;
        }
        i += 1;
    }
}
