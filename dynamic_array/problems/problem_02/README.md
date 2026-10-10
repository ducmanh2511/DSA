
## Đề bài

Sherlock có một tập hợp số nguyên động.

Bạn cần xử lý `Q` truy vấn.

Mỗi truy vấn thuộc một trong bốn loại sau.

---

## Truy vấn loại 1 - Thêm phần tử

```text
1 x
```

Thêm giá trị `x` vào tập hợp.

Có thể biểu diễn thao tác này là:

```text
Add(x)
```

---

## Truy vấn loại 2 - Xóa phần tử

```text
2 x
```

Xóa giá trị `x` khỏi tập hợp.

Có thể biểu diễn thao tác này là:

```text
Delete(x)
```

---

## Truy vấn loại 3 - Tìm phần tử nhỏ thứ x

```text
3 x
```

Tìm phần tử nhỏ thứ `x` trong tập hợp hiện tại.

Vị trí được tính bắt đầu từ `1`.

Ví dụ:

```text
arr = [2, 4, 6, 8]
```

Ta có:

```text
smallest(1) = 2
smallest(2) = 4
smallest(3) = 6
smallest(4) = 8
```

---

## Truy vấn loại 4 - Tìm GCD

```text
4 L R
```

Xét tất cả các giá trị hiện đang có trong tập hợp và nằm trong đoạn:

```text
[L, R]
```

Tìm **ước chung lớn nhất (GCD)** của các giá trị đó.

---

## Giới hạn

```text
Q <= 10^6
x <= 10^6
L <= 10^6
R <= 10^6
```

---

## Định dạng đầu vào

Dòng đầu tiên chứa số lượng truy vấn:

```text
Q
```

Mỗi dòng trong `Q` dòng tiếp theo chứa một truy vấn có một trong các dạng:

```text
1 x
2 x
3 x
4 L R
```

---

## Định dạng đầu ra

Với mỗi truy vấn yêu cầu trả về kết quả, in kết quả trên một dòng riêng.

---

## Ví dụ

### Đầu vào mẫu

```text
10
1 2
1 4
1 5
1 6
1 8
3 1
3 5
2 5
4 6 10
4 1 100
```

### Đầu ra mẫu

```text
2
8
2
2
```

---

## Giải thích

Trạng thái ban đầu:

```text
arr = []
```

### Truy vấn 1

```text
1 2
```

Thêm `2`.

```text
arr = [2]
```

---

### Truy vấn 2

```text
1 4
```

Thêm `4`.

```text
arr = [2, 4]
```

---

### Truy vấn 3

```text
1 5
```

Thêm `5`.

```text
arr = [2, 4, 5]
```

---

### Truy vấn 4

```text
1 6
```

Thêm `6`.

```text
arr = [2, 4, 5, 6]
```

---

### Truy vấn 5

```text
1 8
```

Thêm `8`.

```text
arr = [2, 4, 5, 6, 8]
```

---

### Truy vấn 6

```text
3 1
```

Tìm phần tử nhỏ thứ `1`.

```text
arr = [2, 4, 5, 6, 8]
```

Phần tử nhỏ nhất là:

```text
2
```

Kết quả:

```text
2
```

---

### Truy vấn 7

```text
3 5
```

Tìm phần tử nhỏ thứ `5`.

```text
arr = [2, 4, 5, 6, 8]
```

Phần tử nhỏ thứ `5` là:

```text
8
```

Kết quả:

```text
8
```

---

### Truy vấn 8

```text
2 5
```

Xóa phần tử `5`.

```text
arr = [2, 4, 6, 8]
```

---

### Truy vấn 9

```text
4 6 10
```

Các phần tử nằm trong đoạn `[6, 10]` là:

```text
6 8
```

Tính:

```text
GCD(6, 8) = 2
```

Kết quả:

```text
2
```

---

### Truy vấn 10

```text
4 1 100
```

Các phần tử nằm trong đoạn `[1, 100]` là:

```text
2 4 6 8
```

Tính:

```text
GCD(2, 4, 6, 8) = 2
```

Kết quả:

```text
2
```

Do đó đầu ra cuối cùng là:

```text
2
8
2
2
```