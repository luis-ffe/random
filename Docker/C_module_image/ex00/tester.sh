#!/bin/sh

GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

test_command() {
    COMMAND=$1
    EXPECTED=$2
    OUTPUT=$(eval $COMMAND)
    if [ "$OUTPUT" = "$EXPECTED" ]; then
        printf "${GREEN}[OK]${NC} $COMMAND\n"
    else
        printf "${RED}[KO]${NC} $COMMAND\n"
        printf "Expected: $EXPECTED\n"
        printf "Got:      $OUTPUT\n"
    fi
    # Print the output even if the test passes
    printf "Output:   $OUTPUT\n"
}

test_command './megaphone "shhhhh... I think the students are asleep..."' "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
test_command './megaphone Damnit " ! " "Sorry students, I thought this thing was off."' "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
test_command './megaphone' "* LOUD AND UNBEARABLE FEEDBACK NOISE *"
