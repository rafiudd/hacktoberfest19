# Go lang

Golang (atau biasa disebut dengan Go) adalah bahasa pemrograman baru yang dikembangkan di Google oleh Robert Griesemer, Rob Pike, dan Ken Thompson pada tahun 2007 dan mulai diperkenalkan di publik tahun 2009.

Penciptaan bahasa Go didasari bahasa C dan C++, oleh karena itu gaya sintaks-nya mirip.

## Hello World

### Code

Berikut ini contoh penggunaan bahasa Go untuk menampilkan `Hello World`

```go
package main

import "fmt"

func main() {
  fmt.Printf("hello, Goeroeku\n")
}

```

### Build

Berikut ini cara mem-build agar dapat dijalankan

```sh
> go build
```

### Run

Berikut ini cara menjalankan hasilnya

```sh
./golang #sesuaikan dengan file yang muncul setelah melakukan proses build, biasanya sesuai dengan nama package/folder
```
