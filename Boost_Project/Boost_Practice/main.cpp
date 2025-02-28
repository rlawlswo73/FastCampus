// Boost_Practice_Client(�Ӽ�) -> ��Ŀ -> �Ϲ� -> �߰� ���̺귯�� ���͸� -> boost�� ���̺귯��(C:\boost_1_78_0\stage\lib) �߰�
// Boost_Practice_Client(�Ӽ�) -> ���� �Ӽ� -> VC++ ���͸� -> ���� ���͸� -> boost�� ���̺귯��(C:\boost_1_78_0\stage\lib)�� ��Ʈ ���͸�(C:\boost_1_78_0)�� �߰�

// Client

#include<iostream>
#include<boost/array.hpp>
#include<boost/asio.hpp>
//#include<boost/date_time/posix_time/posix_time.hpp>

using boost::asio::ip::tcp;
using namespace std;

int main(void) {
	/*boost::asio::io_service io;
	boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));
	t.wait();
	std::cout << "Hello, World!" << std::endl;*/

	try {
		// �⺻������ Boost Asio ���α׷��� �ϳ��� IO Service ��ü�� ������.
		boost::asio::io_service io_service;
		// ������ �̸��� TCP ���������� �ٲٱ� ���� Resolver�� ����Ѵ�.
		tcp::resolver resolver(io_service);
		// �����δ� ���� ����, ���񽺴� Daytime ���������� �����ش�.
		tcp::resolver::query query("2.tcp.ngrok.io", "18947");
		// DNS�� ���� IP �ּ� �� ��Ʈ ��ȣ�� ���´�.
		tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);
		// ���� ��ü�� �ʱ�ȭ�Ͽ� ������ �����Ѵ�.
		tcp::socket socket(io_service);
		boost::asio::connect(socket, endpoint_iterator);

		while (1) {
			// ���� �� ���� ó�� ������ �����Ѵ�.
			boost::array<char, 128> buf;
			boost::system::error_code error;
			// ���۸� �̿��� �����κ��� �����͸� �޾ƿ´�.
			size_t len = socket.read_some(boost::asio::buffer(buf), error);
			if (error == boost::asio::error::eof)
				break;
			else if (error)
				throw boost::system::system_error(error);
			// ���ۿ� ��� �����͸� ȭ�鿡 ����Ѵ�.
			cout.write(buf.data(), len);
		}
	} 
	catch (exception& e) {
		cerr << e.what() << endl;
	}
	system("pause");
	return 0;
}