import XCTest
import SwiftTreeSitter
import TreeSitterRobot

final class TreeSitterRobotTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_robot())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Robot grammar")
    }
}
