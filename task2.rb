class Task2
  ARR = [1,4,5,7,8,10,20]

  def search(x)
    ARR.bsearch_index{ |i|  i >= x}
  end
end

print Task2.new.search(7)