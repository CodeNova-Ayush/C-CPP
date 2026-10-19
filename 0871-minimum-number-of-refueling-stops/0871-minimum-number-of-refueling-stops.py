import heapq

class Solution(object):
    def minRefuelStops(self, target, startFuel, stations):
        max_heap = []
        fuel = startFuel
        prev = 0
        stops = 0

        for position, capacity in stations + [[target, 0]]:
            fuel -= position - prev

            while fuel < 0 and max_heap:
                fuel += -heapq.heappop(max_heap)
                stops += 1

            if fuel < 0:
                return -1

            heapq.heappush(max_heap, -capacity)
            prev = position

        return stops