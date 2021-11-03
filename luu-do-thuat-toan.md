# 10 BÀI LƯU ĐỒ THUẬT TOÁN
**Deadline đầu tiên mình nhận được khi tham gia vào Ban Học Tập của Đoàn khoa MMT&TT.**
## BÀI 1. 
![image](https://user-images.githubusercontent.com/53972592/139857911-f9d823a5-771c-4de4-8b30-6dff7d8a158d.png)

Đây là một bài mà mình nhận định là khá đơn giản. Dù không nêu rõ nhưng mình hiểu ý của người ra đề là chỉ được sử dụng phép nhân trong lưu đồ. Dưới đây là bài làm của mình:
![image](https://user-images.githubusercontent.com/53972592/139859749-cd0182c0-9ff9-407d-adb9-28360eda9539.png)

Đầu tiên, cho nhập vào biến `x`. Tiếp theo, mình gán giá trị bình phương của `x` vào một biến mới `x2`. Tương tự, mình lại tiếp tục gán trị bình phương của `x2` vào biến `x4` để được **x mũ 4**. Cuối cùng, để có giá trị của **x mũ 11**, mình tạo biến `x11` và gán cho nó giá trị từ biểu thức `x4*x4*x2*x`. Như vậy, sử dụng phép nhân số mũ có cùng cơ số đã giúp mình tìm được giá trị của **x mũ 11** sau **5** phép nhân.

**English translation:**

First, a variable `x` is inputted. Next, I assign the value of the square of `x` to a new variable `x2`. Similarly, I continue to assign the value of the square of `x2` to the variable `x4` so as to have **x to the power of 4**. Finally, I create a variable named `x11` and assign to it the value of `x4*x4*x2*x`. So, by multiplying exponents with the same base, I am able to find the value of **x to the power of 11** after **5** multiplications.

## BÀI 2.
![image](https://user-images.githubusercontent.com/53972592/139879061-c0e5f4e9-38b1-4c75-a32a-89b6e662fbb7.png)

Dạng bài này khi đọc vô thì thứ đầu tiên mình nghĩ tới là dùng vòng lặp và cứ thế, mình triển khai theo ý tưởng đó ra lưu đồ sau đây:
![image](https://user-images.githubusercontent.com/53972592/139971341-0ba8f60d-8c2a-46e7-85e9-bd65ee92159c.png)

Đầu tiên, cho nhập vào biến `n`. Tiếp theo, mình tạo một biến `sum` với giá trị bằng 0 để chứa giá trị của cái tổng mà mình đang tìm. Sau đó, mình tạo một vòng lặp với điều kiện lặp là `n/10 > 0`, mình sẽ giải thích điều kiện này trong lát nữa. Nếu điều kiện được thỏa mãn, mình thực hiện tiếp 2 câu lệnh là `sum += n%10` và `n /= 10`. Khi **chia lấy dư** một số nguyên bất kì có ít nhất 2 chữ số cho 10 trong C++, ta được thương là chữ số cuối cùng của số nguyên đó. Vậy với câu lệnh thứ nhất, chữ số cuối cùng trong `n` được cộng dồn vào `sum` với mỗi lần lặp. Khi **chia** một số nguyên bất kì có ít nhất 2 chữ số cho 10 trong C++, thương là số nguyên đó nhưng mất đi 1 chữ số ở hàng đơn vị. Vậy với câu lệnh thứ hai, `n` sẽ mất đi 1 chữ số ngoài cùng để trong các lần lặp tiếp theo, những chữ số còn lại của `n` sẽ được cộng vào `sum`. Vòng lặp sẽ được thực hiện tới khi `n` còn 1 chữ số, khi đó, nếu lấy `n` chia cho 10 sẽ thu được kết quả là 0. Do đó, điều kiện lặp không còn được thỏa mãn nữa và ta chuyển sang cộng chữ số còn sót lại của `n` vào `sum`. Từ đó, mình thu được `sum` là tổng của các chữ số trong `n`.

**English translation:**

First, a variable `n` is inputted. Next, I create a variable named `sum` with the value of 0 so as to store the value of the sum I'm looking for. After that, I create a loop with the condition of `n/10 > 0`, I will explain this condition later on. If the condition is satisfied, I continue to execute 2 commands which are `sum += n%10` and `n /= 10`. When **using modulus** of any integer with at least 2 digits and 10 in C++, we get a quotient that is the last digit of said integer. Therefore, with the first command, the last digit in `n` is added to `sum` after each loop. When **dividing** any integer with at least 2 digits by 10 in C++, quotient is said integer but without the digit in the unit position. Thereby, with the second command, `n` will lose 1 digit in the outermost position so that in the following loops, the remaining digits of `n` will be added to `sum`. From that, I receive `sum` as the sum of all the digits in `n`.

## BÀI 3.
![image](https://user-images.githubusercontent.com/53972592/139970194-f06aa799-c01a-4e5f-91f3-93c622a9943e.png)

Với bài này, mình tiếp tục sử dụng vòng lặp trong đó có sự tăng dần của nhiều biến:
![image](https://user-images.githubusercontent.com/53972592/139971394-8270092a-0408-480d-b3a6-bec398d4c55c.png)

Đầu tiên, cho nhập vào 2 biến `x` và `n`. Tiếp theo, mình thực hiện các công việc sau:
  1. Khởi tạo biến `i` với giá trị bằng 1.
  2. Khởi tạo biến `temp` với giá trị bằng `x`, đây là biến dùng để lưu trữ giá trị gốc của `x`.
  3. Khởi tạo biến `s`với giá trị bằng 0, đây là biến để chứa tổng mình đang tìm.

Sau đó, mình tạo một vòng lặp với điều kiện là `i <= n`. Bên trong vòng lặp, `s += x/i` được thực hiện để tính tổng, `x *= temp` được thực hiện để tăng số mũ của `x` lên 1 đơn vị và `i++` được thực hiện để tăng giá trị của mẫu số cũng như để phá vòng lặp. Sau khi `i` đã tăng tới giá trị của `n`, vòng lặp dừng lại và mình thu được `s` là tổng cần tìm.

**English translation:**

First, 2 variables `x` and `n` are inputted. Next, I perform the followings:
  1. Create a variable `i` with the value of 1.
  2. Create a variable `temp` with the value of `x`, this is to store the original value of `x`.
  3. Create a variable `s` with the value of 0, this is to store the sum I'm looking for.
After that, I create a loop with the condition of `i <= n`. Inside the loop, `s += x/i` is executed to calculate the sum, `x *= temp` is executed to increase the exponent by 1 and `i++` is executed to increase the value of the denominator as well as break the loop. After `i` reached the value of `n`, the loop is stopped and I receive `s` as the sum needed to find.

##BÀI 4.
![image](https://user-images.githubusercontent.com/53972592/139993843-c773b896-5f02-40b2-8e38-5c8bdb70c43d.png)

Tiếp tục sử dụng vòng lặp, lần nầy mình cần một biến để liên tục thay đổi dấu của các phần tử:
![image](https://user-images.githubusercontent.com/53972592/139995247-220e6c78-9185-4e4b-a55a-7a012e4830c1.png)

Đầu tiên, cho nhập vào 2 biến `x` và `n`.  Tiếp theo, mình thực hiện các công việc sau:
  1. Khởi tạo biến `i` với giá trị bằng 0.
  2. Khởi tạo biến `temp1` với giá trị bằng `1` và `neg` với giá trị bằng -1, đây là 2 biến dùng để thay đổi dấu.
  3. Khởi tạo biến `temp2` với giá trị bằng `x*x`, đây là biến để chứa các lũy thừa của `x`.
  4. Khởi tạo biến `s`với giá trị bằng 0, đây là biến để chứa tổng mình đang tìm.

Sau đó, mình tạo một vòng lặp với điều kiện là `i < n`. Bên trong vòng lặp, `temp1 *= neg` được thực hiện để thay đổi dấu, `s += temp1*temp2` được thực hiện để tính tổng, `temp2 *= x*x` được thực hiện để tăng số mũ của nó lên 2 đơn vị và `i++` được thực hiện để tăng dần đến khi phá vòng lặp. Khi vòng lặp kết thúc, mình thu được `s` là tổng cần tìm.
