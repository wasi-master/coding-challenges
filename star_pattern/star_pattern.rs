fn main(){
    let mut iterations = 0;
    let mut i = 0;
    let size = 15;

    while iterations < size {
        iterations+=1;
        if iterations <= (size / 2) {
            i+=1;
            print!("{}", " ".repeat(size - i));
            println!("{}", "* ".repeat(i));
        } else {
            i-=1;
            print!("{}"," ".repeat(size - i));
            println!("{}","* ".repeat(i));
        }
    }
}