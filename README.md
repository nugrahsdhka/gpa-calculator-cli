# Simple GPA Calculator (Kalkulator IPK) 🎓

![Language](https://img.shields.io/badge/language-C-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

A lightweight **Command Line Interface (CLI)** tool written in **C** to calculate **Semester GPA / IPK**.
This project is designed to reflect the **standard Indonesian university grading system**, while keeping the implementation simple, explicit, and transparent.

---

## 📋 Features

* **Dynamic Course Input**
  Users define the number of courses (`n`) at runtime, allowing flexible semester sizes.

* **Flexible Grading System**
  Supports standard letter grades and intermediate grades commonly used in Indonesian universities:

  * `A, AB, B, BC, C, CD, D, DE, E`

* **Case Insensitive Input**
  Accepts both uppercase and lowercase grade inputs (e.g., `A` or `a`).

* **Alternative Grade Formats**
  Recognizes both:

  * letter combinations (`AB`, `BC`)
  * minus-style formats (`A-`, `B-`, etc.)

* **Basic Validation**
  Handles invalid grade input to prevent incorrect GPA calculation.

---

## 🛠️ Tech Stack

* **Language:** C (C99 or later)
* **Libraries Used:**

  * `stdio.h`
  * `stdlib.h`
  * `string.h`

> ⚠️ This project uses **Variable Length Arrays (VLA)**, which are supported in C99 but may not be available in all compilers.

---

## ⚙️ Installation & Compilation

Ensure you have a C compiler installed (e.g., **GCC**).

### 1. Clone the Repository

```bash
git clone https://github.com/nugrahsdhka/gpa-calculator-cli.git
cd gpa-calculator-cli
```

### 2. Compile the Program

```bash
gcc main.c -o ipk
```

> **Note:**
>
> * Windows will generate `ipk.exe`
> * Linux/macOS will generate `ipk`

---

## 🚀 Usage

Run the compiled program from your terminal:

### Windows

```bash
.\ipk.exe
```

### Linux / macOS

```bash
./ipk
```

### Example Interaction

```text
Masukkan Jumlah Mata Kuliah: 2

Mata Kuliah Ke-1
Masukkan Jumlah SKS: 3
Masukkan Nilai (A/AB/B/BC/C/CD/D/DE/E): A

Mata Kuliah Ke-2
Masukkan Jumlah SKS: 2
Masukkan Nilai (A/AB/B/BC/C/CD/D/DE/E): B

IPK: 3.60
Total SKS: 5
```

---

## 📊 Grading Scale Reference

The GPA calculation uses the following conversion logic:

| Letter Grade | Alternative Input | Weight |
| ------------ | ----------------- | ------ |
| A            | a                 | 4.0    |
| AB           | A-, ab, a-        | 3.5    |
| B            | b                 | 3.0    |
| BC           | B-, bc, b-        | 2.5    |
| C            | c                 | 2.0    |
| CD           | C-, cd, c-        | 1.5    |
| D            | d                 | 1.0    |
| DE           | D-, de, d-        | 0.5    |
| E            | e                 | 0.0    |

---

## 🧠 Design Notes

This project intentionally prioritizes:

* **Explicit control flow** over abstraction
* **Readability** over optimization
* **Manual validation** to reinforce fundamental C concepts

The goal is to demonstrate **core logic and data handling**, not to build a production-grade academic system.

---

## 🤝 Contributing

Contributions are welcome. Suggestions that improve:

* portability (removing VLA)
* robustness (stronger validation)
* usability (better CLI UX)

are especially appreciated.

**Workflow:**

1. Fork the project
2. Create your feature branch (`git checkout -b feature/NewFeature`)
3. Commit your changes (`git commit -m 'Add NewFeature'`)
4. Push to the branch (`git push origin feature/NewFeature`)
5. Open a Pull Request

---

## 📝 License

Distributed under the **MIT License**.

---

**Author:** Dhika Setia Nugraha
