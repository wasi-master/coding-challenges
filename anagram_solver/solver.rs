use std::fs::File;
use std::io::{self, BufRead};
use std::path::Path;

fn main() -> io::Result<()> {
    // Read words from the file
    let words: Vec<String> = read_lines("./words.txt")?;

    // Sort the characters of each word and store in a new vector
    let words_sorted: Vec<String> = words.iter().map(|w| sort_string(w)).collect();

    // Get user input and sort its characters
    let entered_word = sort_string(&read_user_input());

    // Find anagrams and print them
    for (i, word_sorted) in words_sorted.iter().cloned().enumerate() {
        if word_sorted == entered_word {
            println!("{}", words[i]);
        }
    }

    Ok(())
}

// Function to read lines from a file
fn read_lines<P>(filename: P) -> io::Result<Vec<String>>
where
    P: AsRef<Path>,
{
    let file = File::open(filename)?;
    let reader = io::BufReader::new(file);
    let lines: Vec<String> = reader.lines().collect::<io::Result<_>>()?;
    Ok(lines)
}

// Function to read user input
fn read_user_input() -> String {
    let mut input = String::new();
    println!("Enter anagram to solve: ");
    io::stdin().read_line(&mut input).expect("Failed to read line");
    input.trim().to_string()
}

// Function to sort characters of a string
fn sort_string(s: &str) -> String {
    let mut chars: Vec<char> = s.chars().collect();
    chars.sort();
    chars.into_iter().collect()
}
