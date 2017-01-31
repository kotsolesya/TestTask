class Task1

  def initialize()
    n=rand(1..20)
    #@a = [1,4,3,2].sort
    @b = []
    @a = Array.new(n).map{rand(1..10)}.sort
  end

  def partition(x)

    s = 0
       @a.reverse_each do |el|
       next if el>=x
       @b.push(el)
        if (s+=el) >= x
          break
        end

       end
    @b.size

  end

  def output
    puts "a=#{@a}"
    puts @b.join('+')
  end

end

task1 = Task1.new
puts task1.partition(6)
task1.output