# Cpp-Notes

Learning C++ from first principles — syntax, STL, and practice problems.

---

## Index

1. [C++ Program Skeleton](#1-c-program-skeleton)
2. [Data Types](#2-data-types)
3. [Arrays](#3-arrays)
4. [Strings](#4-strings)
5. [Functions](#5-functions)
6. [Pass by Value vs Pass by Reference](#6-pass-by-value-vs-pass-by-reference)
7. [For Loop](#7-for-loop)
8. [While Loop](#8-while-loop)
9. [Switch Case](#9-switch-case)
10. [Practice — Sum of Array Elements](#10-practice--sum-of-array-elements)
11. [Practice — Print X, N Times](#11-practice--print-x-n-times)
12. [Practice — Print Last Character of a String](#12-practice--print-last-character-of-a-string)
13. [Practice — Number / Star Patterns](#13-practice--number--star-patterns)
14. [Hashmaps — `unordered_map`](#14-hashmaps--unordered_map)

---

## 1. C++ Program Skeleton

**File:** [`1_c++_skeleton.cpp`](1_c++_skeleton.cpp) — **Done**

- **`#include <iostream>`** — pulls in input/output tools (like `cout`, `cin`)
- **`using namespace std`** — lets you use `cout` instead of writing `std::cout` every time; `std` is the container that holds C++'s standard tools
- **`int main()`** — the entry point; the program always starts executing here
- **Curly braces `{}`** — mark the start/end of a block; everything inside `main()` runs sequentially
- **`return 0;`** — signals the program finished successfully (and lets the OS clean up)

---

## 2. Data Types

**File:** [`2_data types.txt`](2_data%20types.txt) — **Done**

- **`int`** — whole numbers (`5`, `-10`, `100`)
- **`float`** — decimal numbers (`3.14`, `-0.1`)
- **`char`** — a single letter or symbol (`'a'`, `'$'`)
- **`bool`** — `true` / `false` only
- **`string`** — text, a collection of characters (`"Hello"`)

---

## 3. Arrays

**File:** [`2_data types.txt`](2_data%20types.txt) — **Done**

- An array is **one variable holding multiple values of the same type** — avoids creating `m1, m2, m3...` for every value
- Analogy: an egg tray — fixed slots, same type in every slot
- **Indexing starts at 0** in C++ — `marks[0]` is the first element
- Example: `int marks[5] = {90, 85, 92, 78, 88};` → `marks[2]` → `92`

---

## 4. Strings

**File:** [`2_data types.txt`](2_data%20types.txt) — **Done**

- A `string` is a chain of characters
- **Concatenation** — `firstName + " " + lastName` joins strings with `+`
- **`.length()`** — returns the number of characters in a string

---

## 5. Functions

**File:** [`2_data types.txt`](2_data%20types.txt) — **Done**

- A function is a reusable block of code for one specific task — write once, call many times
- Analogy: teaching a "servant" how to make tea once, then just saying "Make Tea" whenever needed
- Syntax: `void sayHello() { cout << "Hello user!" << endl; }`, then call with `sayHello();`
- Keeps code clean and avoids repetition

---

## 6. Pass by Value vs Pass by Reference

**File:** [`2_data types.txt`](2_data%20types.txt) — **Done**

- **Pass by Value** ("the photocopy") — the function gets a **copy** of the variable; changes inside the function don't affect the original
  - `void changeValue(int x) { x = 100; }` → original variable stays unchanged
- **Pass by Reference** ("the original") — using `&` sends the actual variable (its address); changes inside the function **do** affect the original
  - `void changeRealValue(int &x) { x = 100; }` → original variable changes too
- Analogy: photo of homework (value) vs handing over the actual notebook (reference)

---

## 7. For Loop

**File:** [`3_loops.txt`](3_loops.txt) — **Done**

- Syntax: `for (initialization; condition; updation)`
  - **Initialization** (`int i = 1`) — runs once, at the start
  - **Condition** (`i <= 5`) — checked before every iteration; loop continues while `true`
  - **Updation** (`i++`) — runs at the end of every iteration, usually to move the counter
- Used instead of writing the same line of code repeatedly (e.g. printing "Hello" 5 times)

---

## 8. While Loop

**File:** [`3_loops.txt`](3_loops.txt) — **Done**

- Simpler than a `for` loop — only cares about the condition: *"While you are hungry, eat."*
- Must manually increment the counter inside the loop body, or it runs forever
- Example: `while (count <= 5) { cout << count << " "; count++; }` → `1 2 3 4 5`

---

## 9. Switch Case

**File:** [`3_loops.txt`](3_loops.txt) — **Done**

- Cleaner alternative to a long `if-else` chain when checking one variable against many fixed values (like a menu)
- **`break`** — exits the switch block once a match runs; omitting it causes **fall-through** (the next cases run too, regardless of match)
- **`default`** — runs when no case matches; acts like the final `else`

---

## 10. Practice — Sum of Array Elements

**File:** [`4_sum_of_arrays.cpp`](4_sum_of_arrays.cpp) — **In progress (has bugs)**

- Reads `n`, then `n` integers into a `vector<int>`, and prints them back space-separated
- **Known issues to fix:**
  - The early `return 0;` makes the "sum of first + last element" logic below it **unreachable**
  - `n` is declared twice in the same scope (once at the top, again lower down) — won't compile
  - `sum` is also declared twice (`int sum = 0;` then `int sum = first + last;`) — same issue
- **Next step:** remove the early `return 0;`, delete the duplicate `int n` / `int sum` declarations, and actually `cout` the result

---

## 11. Practice — Print X, N Times

**File:** [`5_print_x_n_times.cpp`](5_print_x_n_times.cpp) — **Done**

- Problem: given `X` and `N`, print `X` exactly `N` times, space-separated, with no trailing space and a trailing newline (even when `N = 0`)
- Pattern used: only print a leading space when `i > 0`, so there's never a stray space before the first or after the last number
- Working correctly for all given example cases

---

## 12. Practice — Print Last Character of a String

**Files:** [`6_printLastCharString1.cpp`](6_printLastCharString1.cpp), [`6_printLastCharString2.cpp`](6_printLastCharString2.cpp)

- **Attempt 1 — In progress (bug):** uses `s.size()` to find the last index, then `return s[n-1];` — this doesn't print anything; it returns the character as the program's exit code instead. Needs `cout << s[n-1];` to actually display it.
- **Attempt 2 — Done:** uses `getline(cin, s)` instead of `cin >> s` (since `cin >>` stops at the first space — `getline` is needed to capture full strings with spaces), then prints the last character with the STL `.back()` method
- Take-away: `cin >> s` vs `getline(cin, s)` — use `getline` whenever the input might contain spaces

---

## 13. Practice — Number / Star Patterns

**Files:** [`7_patterns1.cpp`](7_patterns1.cpp) → [`7_patterns9.cpp`](7_patterns9.cpp)

| File | Pattern | Status |
|------|---------|--------|
| `7_patterns1.cpp` | Fixed 4×4 grid of `* * * *`, one row per loop iteration | Done |
| `7_patterns2.cpp` | Same 4×4 grid, built with a nested loop instead of a fixed string | Done |
| `7_patterns3.cpp` | Right triangle of stars — row `i` has `i` stars, size `n` from input | Done |
| `7_patterns4.cpp` | Right triangle of numbers — row `i` prints `1..i` | Done |
| `7_patterns5.cpp` | Right triangle — row `i` prints the number `i`, repeated `i` times | Done |
| `7_patterns6.cpp` / `7_patterns7.cpp` | — | *Not uploaded yet — gap in the sequence* |
| `7_patterns8.cpp` | Inverted/right-aligned triangle — row `i` prints `n - i + 1` stars (counts down) | Done |
| `7_patterns9.cpp` | — | *Empty file — not started* |

- Core technique across all of these: **outer loop = row number**, **inner loop = what to print on that row** — the inner loop's bounds are what change between patterns

---

## 14. Hashmaps — `unordered_map`

**File:** [`hashmap_unordered.cpp`](hashmap_unordered.cpp) — **Done**

- `unordered_map<KeyType, ValueType>` — a hashmap; `<string, int>` here is the **template** specifying key/value types
- **Three ways to insert:**
  1. `make_pair("babbar", 3)` → `mp.insert(p)`
  2. Direct pair construction: `pair<string,int> p2("Jyoti", 2);` → `mp.insert(p2)`
  3. Direct indexing: `mp["Dixit"] = 3;`
- **Re-inserting an existing key updates its value** rather than creating a duplicate — `mp["Dixit"] = 4;` overwrites the `3` from before
- **Open question to dig into next:** if keys never duplicate, where do hash *collisions* actually come from? (Worth looking into how `unordered_map` buckets work internally — multiple distinct keys can hash to the same bucket, which is different from the same key being re-inserted.)

---

## File Map

| # | File | Topic | Status |
|---|------|-------|--------|
| 1 | `1_c++_skeleton.cpp` | C++ program skeleton | Done |
| 2 | `2_data types.txt` | Data types, arrays, strings, functions, pass by value/reference | Done |
| 3 | `3_loops.txt` | For loop, while loop, switch case | Done |
| 4 | `4_sum_of_arrays.cpp` | Sum of array elements | In progress — bugs |
| 5 | `5_print_x_n_times.cpp` | Print X, N times | Done |
| 6 | `6_printLastCharString1.cpp` | Last char of string (attempt 1) | In progress — bug |
| 7 | `6_printLastCharString2.cpp` | Last char of string (attempt 2) | Done |
| 8 | `7_patterns1.cpp` | Pattern: fixed 4×4 grid | Done |
| 9 | `7_patterns2.cpp` | Pattern: 4×4 grid, nested loop | Done |
| 10 | `7_patterns3.cpp` | Pattern: right triangle (stars) | Done |
| 11 | `7_patterns4.cpp` | Pattern: right triangle (numbers 1..i) | Done |
| 12 | `7_patterns5.cpp` | Pattern: right triangle (row number repeated) | Done |
| 13 | `7_patterns8.cpp` | Pattern: countdown triangle | Done |
| 14 | `7_patterns9.cpp` | Pattern (unassigned) | Not started |
| 15 | `hashmap_unordered.cpp` | `unordered_map` basics | Done |

---

## Housekeeping

- Loose extension-less files (e.g. `5_print_x_n_times`, `7_patterns5`, `7_patterns8`, `vscode`) appear to be compiled binaries from `g++ file.cpp -o file`. Add a rule to `.gitignore` so these don't get committed:
  ```
  # compiled binaries with no extension
  5_print_x_n_times
  7_patterns5
  7_patterns8
  vscode
  ```
  (Or more robustly, compile into a separate `build/` folder and `.gitignore` that folder instead.)
- `7_patterns6.cpp` and `7_patterns7.cpp` are missing from the sequence — either not written yet or not uploaded.