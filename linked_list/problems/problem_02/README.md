## Bài 2: Xóa bạn bè (Remove Friends)

**Chủ đề:** Singly Linked List

**Đề gốc:** [Remove Friends](https://www.hackerearth.com/practice/data-structures/linked-list/singly-linked-list/practice-problems/algorithm/remove-friends-5/)

### Đề bài

Sau khi hoàn thành chương trình tiến sĩ, Christie trở nên nổi tiếng tại trường đại học. Tài khoản Facebook của cô nhận được rất nhiều lời mời kết bạn và cô đã chấp nhận tất cả.

Kuldeep cảm thấy ghen tị vì Christie nhận được quá nhiều sự chú ý. Vì vậy, Christie quyết định xóa một số người khỏi danh sách bạn bè.

Christie biết mức độ nổi tiếng của từng người bạn và sử dụng quy tắc sau để xóa một người:

1. Duyệt danh sách bạn bè từ đầu đến cuối.
2. Tìm người bạn đầu tiên có mức độ nổi tiếng **nhỏ hơn người đứng ngay sau**.
3. Nếu tìm thấy, xóa người bạn đó khỏi danh sách.
4. Nếu không tồn tại cặp bạn bè nào thỏa mãn điều kiện trên, xóa người bạn cuối cùng.

Sau mỗi lần xóa, những người còn lại giữ nguyên thứ tự tương đối.

Christie thực hiện thao tác này cho đến khi xóa đúng `K` người.

**Yêu cầu:** Cho danh sách ban đầu gồm `N` người bạn và số lượng người cần xóa `K`. Hãy xác định danh sách còn lại sau khi thực hiện đúng `K` lần xóa.

### Dữ liệu vào (Input)

- Dòng đầu tiên chứa số nguyên `T`, là số lượng bộ test.
- Với mỗi bộ test:
  - Dòng đầu tiên chứa hai số nguyên `N` và `K`, lần lượt là số lượng bạn bè ban đầu và số lượng bạn bè cần xóa.
  - Dòng tiếp theo chứa `N` số nguyên cách nhau bởi dấu cách, biểu diễn mức độ nổi tiếng của từng người theo thứ tự ban đầu.

### Dữ liệu ra (Output)

Với mỗi bộ test, in ra một dòng gồm `N - K` số nguyên biểu diễn mức độ nổi tiếng của những người bạn còn lại.

Các số được in theo thứ tự trong danh sách sau khi xóa và cách nhau bởi dấu cách.

### Ràng buộc (Constraints)

- `1 <= T <= 1000`
- `1 <= N <= 10^5`
- `0 <= K < N`
- `0 <= A[i] <= 100`

**Lưu ý:** Phải giữ nguyên thứ tự tương đối của những người bạn còn lại sau khi xóa đúng `K` người.

### Ví dụ

**Input**
```text
3
3 1
3 100 1
5 2
19 12 3 4 17
5 3
23 45 11 77 18
```

**Output**
```text
100 1
19 12 17
77 18
```

### Giải thích ví dụ

**Bộ test 1**

Danh sách ban đầu:

`3 -> 100 -> 1`

Cần xóa `K = 1` người.

Vì `3 < 100`, xóa người có mức độ nổi tiếng bằng `3`.

Danh sách còn lại:

`100 -> 1`

**Bộ test 2**

Danh sách ban đầu:

`19 -> 12 -> 3 -> 4 -> 17`

Cần xóa `K = 2` người.

- Lần 1: Vì `3 < 4`, xóa `3`.
- Lần 2: Danh sách còn `19 -> 12 -> 4 -> 17`. Vì `4 < 17`, xóa `4`.

Danh sách cuối cùng:

`19 -> 12 -> 17`

**Bộ test 3**

Danh sách ban đầu:

`23 -> 45 -> 11 -> 77 -> 18`

Cần xóa `K = 3` người.

- Lần 1: Xóa `23` vì `23 < 45`.
- Lần 2: Xóa `11` vì `11 < 77`.
- Lần 3: Xóa `45` vì `45 < 77`.

Danh sách cuối cùng:

`77 -> 18`