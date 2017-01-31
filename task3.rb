class Task3

  STR = 'Fizz::Buzz::Wizz'

  def split_to_a
   a = STR.split('::')
   tmp_str = ""
   a.map!{ |x| (tmp_str += "#{x}::")[0...-2]}.reverse!
  end
end

print Task3.new.split_to_a