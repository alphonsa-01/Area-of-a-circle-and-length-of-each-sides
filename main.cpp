#include<cmath>
#include<iostream>

const int kSquared = 2;
const int kDivisorOfSemiParameter = 2;

int main()
{
	std::cout << "Enter the first point :";//prompt to get the first point, two values at a time
	auto first_point_part_one = 0.0;
	auto first_point_part_two = 0.0;
	std::cin >> first_point_part_one >> first_point_part_two;

	std::cout << "Enter the second point :"; //prompt to get the second point,two values at a time
	auto second_point_part_one = 0.0;
	auto second_point_part_two = 0.0;
	std::cin >> second_point_part_one >> second_point_part_two;

	std::cout << "Enter the third point :";//prompt to get the third point,two values at a time
	auto third_point_part_one = 0.0;
	auto third_point_part_two = 0.0;
	std::cin >> third_point_part_one >> third_point_part_two;

	//distance formula is sqrt of (x2 − x1)2 + (y2 − y1)2 where (x1,x2) and (y1,y2)are two points
	//below we do the first step to find the distance of each side
	auto difference_side_one = std::pow((second_point_part_one - first_point_part_one), kSquared) +std::pow((second_point_part_two - first_point_part_two), kSquared);
	auto difference_side_two = std::pow((third_point_part_one - second_point_part_one), kSquared) + std::pow((third_point_part_two - second_point_part_two),kSquared);
	auto difference_side_three = std::pow((third_point_part_one - first_point_part_one), kSquared) + std::pow((third_point_part_two - first_point_part_two), kSquared);

	//below we find the squareroot of the answers we got in the previous step to find the distance of each side
	auto length_side_one = std::sqrt(difference_side_one);
	auto length_side_two = std::sqrt(difference_side_two);
	auto length_side_three = std::sqrt(difference_side_three);

	
	std::cout << "length of side one : " << length_side_one << std::endl; //here we display the length of each side
	std::cout << "length of side two : " << length_side_two << std::endl;
	std::cout << "length of side three : " << length_side_three << std::endl;

	auto perimeter = (length_side_one + length_side_two + length_side_three); //here we find the perimeter of triangle

	std::cout << "Perimeter :" << perimeter << std::endl; //here we display the perimeter

	auto semi_perimeter = perimeter / static_cast<double>(kDivisorOfSemiParameter); //here we find the 's' of triangle, we typecast the constant as that is an int

	//below we find the first step to get the area of a triangle
	auto product_of_sides_with_semi_perimeter = semi_perimeter * (semi_perimeter - length_side_one) *(semi_perimeter - length_side_two) *(semi_perimeter - length_side_three);

	//here we find the squareroot of the answer we got in the previous step to find the area of triangle
	auto area = std::sqrt(product_of_sides_with_semi_perimeter);

	std::cout << "Area : " << area << std::endl; //here we display the area
	return 0;
}