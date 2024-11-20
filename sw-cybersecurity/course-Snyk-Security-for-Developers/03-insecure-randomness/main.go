package main

import (
	"crypto/sha256"
	"fmt"
	"io/ioutil"
	"os"
	"os/exec"
	"strconv"
	"time"

	"github.com/google/uuid"
)

func clear_screen() {
	c := exec.Command("clear")
	c.Stdout = os.Stdout
	c.Run()
}

func new_line() {
	fmt.Println()
}

func generate_forgot_password_token(username string) {
	now := time.Now()
	password := strconv.Itoa(now.Hour()) + strconv.Itoa(now.Minute()) + username
	hash := sha256.New()
	hash.Write([]byte(password))
	fmt.Printf("%x", hash.Sum(nil))
}

func uuid_v1() {
	uuid_v1_sample, err := uuid.NewUUID()

	if err != nil {
		fmt.Println("Something is wrong.")
	}

	fmt.Println(uuid_v1_sample)
}

func uuid_v4() {
	u, _ := ioutil.ReadFile("/proc/sys/kernel/random/uuid")
	fmt.Println(string(u))
}

func main() {
	// Cleanup the terminal.
	clear_screen()
	new_line()
	new_line()

	// Sample for generating password using sha256.
	fmt.Println("Generate Forgot Password Token:")
	generate_forgot_password_token("Password@123!")
	new_line()
	new_line()

	// Sample for UUID V1.
	fmt.Println("UUID V1:")
	uuid_v1()
	new_line()
	new_line()

	// Sample for UUID V4.
	fmt.Println("UUID V4:")
	uuid_v4()
	new_line()
	new_line()

	// Exit app.
	new_line()
	new_line()
}
