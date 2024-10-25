#!/bin/bash

# Check if filename is provided as an argument
if [ -z "$1" ]; then
  echo "Usage: ./run.sh <filename.cpp>"
  exit 1
fi

# Compile the C++ program
g++ "$1" -o program
if [ $? -ne 0 ]; then
  echo "Compilation failed"
  exit 1
fi

# Run the program in a loop to accept multiple inputs
while true; do
  echo "Enter input (or type 'exit' to quit): "
  read  userInput
  
  
  # Check for exit condition
  if [[ "$userInput" == "exit" ]]; then
    break
  fi

  # Run the program with the provided input and capture the output
  output=$(echo "$userInput" | ./program)

  # Display the output
  echo "Program Output:"
  echo "$output"
done

# Clean up by removing the compiled program
rm program
