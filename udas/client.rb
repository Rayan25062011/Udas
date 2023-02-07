require 'socket'

name = ARGV.shift
s = TCPSocket.new 'localhost', 2000

s.puts "#{name}"

def local_typing socket
  loop do
    print "⌠you⌡➢ "
    text_to_send = gets.chomp
    socket.puts text_to_send
  end
end

def receive_from_server socket
  while line = socket.gets
    puts line
  end
end


lt = Thread.new { local_typing(s) }
rfs = Thread.new { receive_from_server(s) }

lt.join
rfs.join

s.close