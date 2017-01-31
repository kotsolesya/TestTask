class Task4
  def do_magic
    (1..100).inject(&:+)
  end
end
puts Task4.new.do_magic