# recursion_cpp
reversing an array using recursion in c++


this is a functional recursive code of reversing an array in c++. function recusrion is used when we want the function to give us something i.e to return a value. this kind of recursion is very common in dynamic progrmming.



# Recursion CPP:

Reversing an array using recursion in c++

This is a functional recursive code for reversing an array in C++. Recursion is used when we want a function to return a value or perform a repeated task. This type of recursion is commonly used in dynamic programming.

## Two Pointers Approach to Reverse an Array

The two-pointers approach is an efficient way to reverse an array by utilizing two indices that start from the opposite ends of the array and move towards the center. This method is simple and works in-place, meaning it requires no extra space apart from the input array.

### Explanation

Consider an array: `[1, 2, 3, 4, 5]`.

We use two pointers:
- `start` pointer, which starts at the beginning of the array.
- `end` pointer, which starts at the end of the array.

The idea is to swap the elements at the `start` and `end` pointers and then move these pointers towards the center. This process is repeated until the `start` pointer is no longer less than the `end` pointer.

#### Step-by-Step Example

Initial array:

|1|2|3|4|5|
|--|--|--|--|--|
| ⬆ |  |  |  | ⬆ |
|start| |  |  | end|

1. Swap `arr[start]` and `arr[end]`:

|5|2|3|4|1|
|--|--|--|--|--|
| ⬆ |  |  |  | ⬆ |
|start| |  |  | end|

2. Move `start` pointer to the right and `end` pointer to the left:

|5|2|3|4|1|
|--|--|--|--|--|
|   | ⬆ |  | ⬆ |   |
|   |start|  |end|   |

3. Swap `arr[start]` and `arr[end]`:

|5|4|3|2|1|
|--|--|--|--|--|
|   | ⬆ |  | ⬆ |   |
|   |start|  |end|   |

4. Move `start` pointer to the right and `end` pointer to the left:

|5|4|3|2|1|
|--|--|--|--|--|
|   |   | ⬆ |   |   |
|   |   |start, end|   |   |

5. Now, `start` is no longer less than `end`, so the process stops.

#### Recursive Implementation

Here's a C++ implementation of this approach using recursion:

```cpp
void reverseArr(int arr[], int start, int end){
    if(start < end){
        swap(arr[start], arr[end]);
        reverseArr(arr, start+1, end-1);
    }
    else return;
}
```

***


