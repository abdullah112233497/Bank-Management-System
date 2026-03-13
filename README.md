# Bank Management System 🏦💻

This **Bank Management System** is a **C++ console application** built using **Object-Oriented Programming (OOP)** principles.
It simulates a **bank environment** where multiple clients can manage accounts, and the bank manager can handle administrative operations.

---

## 🔹 Features

* **Multiple Clients Support** – Client1, Client2, Client3 with independent accounts
* **Bank Manager Operations** – View, update, and manage client accounts
* **Account Management** – Deposit, withdraw, check balance
* **OOP Implementation** – Classes for `Bank`, `Client`, and `Manager` for modular design
* **Executable Files** – Precompiled `.exe` files for quick testing

---

## 🗂 Project Structure

| File           | Description                        |
| -------------- | ---------------------------------- |
| `bank.cpp`     | Core bank logic implementation     |
| `bank.h`       | Bank class and method declarations |
| `client_1.cpp` | Client 1 operations implementation |
| `client_2.cpp` | Client 2 operations implementation |
| `client_3.cpp` | Client 3 operations implementation |
| `manager.cpp`  | Manager operations implementation  |
| `Client1.exe`  | Executable for Client 1            |
| `Client2.exe`  | Executable for Client 2            |
| `Client3.exe`  | Executable for Client 3            |
| `manager.exe`  | Executable for Manager             |
| `README.md`    | Project documentation              |

---

## 🛠 Tech Stack

* **Language:** C++
* **Paradigm:** Object-Oriented Programming (OOP)
* **Compilation:** GCC / Visual Studio / Any C++ Compiler
* **Platform:** Console Application (Windows `.exe`)

---

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/<your-username>/Bank-Management-System.git
cd Bank-Management-System
```

### 2. Compile the Code (Optional)

If you want to compile from source:

```bash
g++ bank.cpp client_1.cpp -o Client1.exe
g++ bank.cpp client_2.cpp -o Client2.exe
g++ bank.cpp client_3.cpp -o Client3.exe
g++ bank.cpp manager.cpp -o manager.exe
```

### 3. Run Executables

Double-click the `.exe` files or run from terminal:

```bash
./Client1.exe
./Client2.exe
./Client3.exe
./manager.exe
```

---

## 💡 How It Works

* Each **Client** can perform operations like:

  * Check Balance
  * Deposit Money
  * Withdraw Money

* The **Manager** can:

  * View all clients’ accounts
  * Update account information
  * Approve transactions

* The system uses **OOP design** with classes and methods for modularity.

---

## 📦 Contribution

Contributions are welcome! You can:

* Add more clients
* Implement **file-based storage** to save accounts
* Add a **GUI interface** using C++ frameworks

---

## 📜 License

This project is **MIT Licensed** – see the [LICENSE](LICENSE) file for details.

---
