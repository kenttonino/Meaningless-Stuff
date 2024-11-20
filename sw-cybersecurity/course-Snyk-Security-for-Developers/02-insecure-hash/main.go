package main

import (
	"crypto/md5"
	"encoding/hex"
	"fmt"
	"os"
	"os/exec"

	"golang.org/x/crypto/bcrypt"
)

const password = "Password@123!"

func new_line() {
	fmt.Println()
}

func clear_screen() {
	c := exec.Command("clear")
	c.Stdout = os.Stdout
	c.Run()
}

func md5_password() string {
	hasher := md5.New()
	hasher.Write([]byte(password))
	return hex.EncodeToString(hasher.Sum(nil))
}

func salt_pasword() string {
	var passwordBytes = []byte(password)
	hash, err := bcrypt.GenerateFromPassword(passwordBytes, bcrypt.MinCost)

	// Error handling.
	if err != nil {
		return "Something is wrong."
	}

	return string(hash)
}

func main() {
	// Clear the screen.
	clear_screen()
	new_line()

	// Sample MD5 hash algorithm.
	fmt.Println("Password using MD5 Hash:")
	fmt.Println(md5_password())
	new_line()

	// Sample password with salt.
	fmt.Println("Password with Salt:")
	fmt.Println(salt_pasword())
	new_line()
}
