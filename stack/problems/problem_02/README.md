# Thư viện của Alice (Alice's library)

**Phân loại:** Stack  
**Giới hạn thời gian:** 2 giây  
**Giới hạn bộ nhớ:** 256 MB

Alice đang sắp xếp lại thư viện. Cô lấy kệ ở trong cùng, đảo ngược thứ tự các cuốn sách trên kệ rồi tháo bỏ các vách của kệ đó. Cô tiếp tục thực hiện quá trình này cho đến khi chỉ còn các cuốn sách, không còn vách kệ. Hãy in thứ tự các cuốn sách sau khi sắp xếp.

Vách mở và vách đóng của kệ lần lượt được biểu thị bằng `/` và `\`. Mỗi cuốn sách được biểu thị bằng một chữ cái thường.

## Dữ liệu vào

Dòng đầu tiên chứa chuỗi `s` biểu thị thư viện của Alice.

## Dữ liệu ra

In một chuỗi biểu thị thứ tự các cuốn sách sau khi sắp xếp.

## Ràng buộc

- `2 ≤ |s| ≤ 10^3`

**Lưu ý:** Ký tự đầu tiên của `s` là `/` và ký tự cuối cùng là `\`; đây là hai vách ngoài cùng của kệ.

## Ví dụ

**Input**

```text
/u/love\i\
```

**Output**

```text
iloveu
```

**Giải thích:** Alice đảo ngược thứ tự sách trong kệ ở trong cùng và tháo vách của kệ đó, thu được `/uevoli\`. Sau đó, cô đảo ngược thứ tự sách trong kệ ngoài cùng và tháo các vách còn lại, thu được `iloveu`.

**Nguồn:** https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/katrina-and-library-c2ed51f3/