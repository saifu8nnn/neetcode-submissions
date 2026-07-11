class MyHashMap:

    def __init__(self):
        self.hashmap=[[] for _ in range(10000)]

    def put(self, key: int, value: int) -> None:
        index=key%10000
        bucket=self.hashmap[index]
        for pair in bucket:
            if pair[0]==key:
                pair[1]=value
                return
        bucket.append([key,value])

    def get(self, key: int) -> int:
        index=key%10000
        bucket=self.hashmap[index]
        for pair in bucket:
            if pair[0]==key:
                return pair[1]
        return -1


    def remove(self, key: int) -> None:
        index=key%10000
        bucket=self.hashmap[index]
        for pair in bucket:
            if pair[0]==key:
                bucket.remove(pair)
            
        


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)