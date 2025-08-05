func singleNumber(nums []int) int {
    if len(nums) == 1 {
        return nums[0]
    }
    sort.Ints(nums)
    for i := 0; i < len(nums); i++ {
        if i + 1 < len(nums) && nums[i] == nums[i + 1] {
            i++
        } else {
            return nums[i]
        }
    }
    return 0
}