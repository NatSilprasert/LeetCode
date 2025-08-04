func removeDuplicates(nums []int) int {
    number := 1
    for i := 1; i < len(nums); i++ {
        if nums[i] != nums[i - 1] {
            nums[number] = nums[i]
            number += 1
        }
    }
    return number
}